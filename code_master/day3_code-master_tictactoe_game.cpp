#include <iostream>
#include <string>
using namespace std;

struct BoardSquare
{
  enum E
  {
    X,
    O,
    Empty
  };
};

struct WinningPlayer
{
  enum E
  {
    X,
    O,
    Stalemate,
    None
  };
};

class Board
{

private:
  int _width;
  BoardSquare::E *_squares;

public:
  Board(int width) : _width(width)
  {
    _squares = new BoardSquare::E[width * width];
    for (auto i = 0; i < GetTotalSquares(); i++)
    {
      _squares[i] = BoardSquare::Empty;
    }
  }

  int GetWidth() { return _width; }
  int GetTotalSquares() { return _width * _width; }

  ~Board()
  {
    delete[] _squares;
  }

  BoardSquare::E GetSquare(int index) { return _squares[index]; }

  void SetSquare(int index, BoardSquare::E square)
  {
    _squares[index] = square;
  }
};

class IRuleEngine
{
public:
  virtual WinningPlayer::E GetWinningPlayer(Board &board) = 0;
};

class Game
{
private:
  Board &_board;
  IRuleEngine &_ruleEngine;

public:
  Game(Board &board, IRuleEngine &ruleEngine) : _board(board), _ruleEngine(ruleEngine)
  {
  }

  WinningPlayer::E Run()
  {
    WinningPlayer::E winningPlayer, currentPlayer = WinningPlayer::X;
    while ((winningPlayer = _ruleEngine.GetWinningPlayer(_board)) == WinningPlayer::None)
    {
      Render();
      cout << "\n";

      int input;
      cout << "Move for " << (currentPlayer == WinningPlayer::X ? 'X' : 'O') << ": ";
      cin >> input;
      cin.ignore();

      input -= 1;
      if (input < 0 || input > _board.GetTotalSquares() || _board.GetSquare(input) != BoardSquare::Empty)
      {
        cout << "Invalid Move!\n";
        continue;
      }

      _board.SetSquare(input, currentPlayer == WinningPlayer::X ? BoardSquare::X : BoardSquare::O);
      currentPlayer = currentPlayer == WinningPlayer::X ? WinningPlayer::O : WinningPlayer::X;
    }

    return winningPlayer;
  }

private:
  void Render()
  {
    for (auto i = 1; i <= _board.GetTotalSquares(); i++)
    {
      cout << GetSquareChar(i, _board.GetSquare(i - 1)) << " ";
      if ((i % _board.GetWidth()) == 0)
        cout << "\n";
    }
  }

  char GetSquareChar(int index, BoardSquare::E square)
  {
    switch (square)
    {
    case BoardSquare::X:
      return 'X';
    case BoardSquare::O:
      return 'O';
    }

    return index + '0';
  }
};

int main()
{

  return 0;
}
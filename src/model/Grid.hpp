#pragma once

#include "Matrix.hpp"

class Grid {

public:
    Grid(int s);

    ~Grid();

    int getSize();

    const int getSize() const;

    /**
     * @brief Get the grid magnetisation
     *
     * @return The grid magnetisation
     */
    double getMagnetisation();

    double getTotalSpin();

    double getEnergy(double h);

    Matrix *getMatrix();

    const Matrix *getMatrix() const;

    void resetGrid();

    /**
     * @brief Get the neighbours energy of the spin(i,j)
     *
     * @param i X position
     * @param j Y position
     * @return The local energy
     */
    double getDeltaEnergy(int i, int j, double h);

    Grid &operator=(const Grid &);

    bool operator==(const Grid &);

    bool operator!=(const Grid &);

private:
    int size;
    Matrix *matrix;

};

std::ostream &operator<<(std::ostream &out, const Grid &g);

#pragma once

class IConta{
    protected:
        virtual void sacar(double)=0;
        virtual void depositar(double)=0;
};
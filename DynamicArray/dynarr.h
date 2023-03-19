#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED


class dynArr
{
 private:
 int *data;
 int size;

 public:
 dynArr();
 dynArr(int size);
 ~dynArr();
 void setValue(int index, int value);
 int getValue(int index);
 /**Task 2**/
 /**Declaring prototype of the new function**/
 void allocate(int resize);

};



#endif // DYNARR_H_INCLUDED

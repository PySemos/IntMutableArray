# IntMutableArray
TAD(Type Abstract of Data)

A TAD that implement a dinamic int array

This TAD have a struct named IntMutableArray,
that have two fields length and array.
Array field is a pointer to the dinamic array and length,
the length of the array.
This TAD have many methods:

initArray
append
pop
getlength
showArray
insert
freeArray

initArray: Need the struct (pointer),
one static array to initialize
and the length of that array.
This will create a dinamic array,
and the array field will point to that dinamic array.
Tha static array passed will be for initialize
the dinamic array (may be an empty array).
And the length param muat be equal to the real length
of that static array.

append :
Need the struct (pointer),
an item (int).
This method will add at the end of the dinamic array
Of the struct the item passed.

pop :
Need the struct (pointer),
And an index.
This method will delete the number index element of
the dinamic array and will return it.

getlength:
Need the struct,
This method will return the length 
of the dinamic array.

showArray:
Need the struct,
This methld will show all the items in 
the dinamic array.

insert:
This method will need the struct(pointer),
the index ans the item(int),

This method will add the item in the 
number index element of the dinamic array.

freeArray:

This method will need the struct(pointer),
This method will free the dinamic array and set
that pointer to the NULL constant in the stdio.h,


Note:
freeArray not set the length param to 0.











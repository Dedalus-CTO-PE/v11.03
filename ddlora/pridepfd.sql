create table pridepaf
(
prdpdebt    varchar2(8),
dprdpscn    varchar2(2),
prdpprac    varchar2(6),
prdprect    varchar2(12),
dprdptcn    varchar2(3),
prdpamou    number(14,2),
prdpdate    varchar2(8),
prdpspar    varchar2(20),
lf          varchar2(1),
constraint pridepa1 primary key( 
prdpdebt,
dprdpscn,
prdpprac,
prdprect,
dprdptcn)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pridepaf for pridepaf;

create table pridvaaf
(
dprdvrun    varchar2(4),
prdvinvn    varchar2(8),
prdvitmn    varchar2(9),
prdvdate    varchar2(8),
prdvtime    varchar2(8),
prdvbulk    varchar2(3),
prdvtype    number(1,0),
prdvamou    number(14,2),
prdvdoct    varchar2(6),
prdvspar    varchar2(8),
lf          varchar2(1),
constraint pridvaa1 primary key( 
dprdvrun,
prdvinvn,
prdvitmn)
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
create public synonym pridvaaf for pridvaaf;
create unique index pridvaa2 on pridvaaf
(
prdvdate,
prdvinvn,
prdvitmn
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 

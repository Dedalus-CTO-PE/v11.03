create table patuadaf
(
dptuaadm    varchar2(8),
ptuadate    varchar2(8),
ptuatime    varchar2(8),
ptuaour     varchar2(8),
ptuanur     varchar2(8),
ptuaopr     varchar2(30),
ptuaspar    varchar2(19),
lf          varchar2(1),
constraint patuada1 primary key( 
dptuaadm,
ptuadate,
ptuatime)
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
create public synonym patuadaf for patuadaf;

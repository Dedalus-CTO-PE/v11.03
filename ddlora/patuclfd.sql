create table patuclaf
(
ptucuser    varchar2(4),
ptuccons    varchar2(6),
ptucpriv    varchar2(50),
ptucindp    varchar2(50),
ptucspar    varchar2(39),
lf          varchar2(1),
constraint patucla1 primary key( 
ptucuser,
ptuccons)
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
create public synonym patuclaf for patuclaf;
create unique index patucla2 on patuclaf
(
ptuccons,
ptucuser
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 

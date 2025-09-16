create table patuniaf
(
ptuispec    varchar2(3),
ptuidoct    varchar2(6),
ptuiteam    varchar2(6),
ptuisdat    varchar2(8),
ptuiedat    varchar2(8),
ptuispar    varchar2(40),
lf          varchar2(1),
constraint patunia1 primary key( 
ptuispec,
ptuidoct)
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
create public synonym patuniaf for patuniaf;
create unique index patunia2 on patuniaf
(
ptuidoct,
ptuispec
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index patunia3 on patuniaf
(
ptuiteam,
ptuispec,
ptuidoct
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 

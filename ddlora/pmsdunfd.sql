create table pmsdunaf
(
pmdudoct    varchar2(6),
pmduunit    varchar2(3),
pmduhead    varchar2(1),
pmduspar    varchar2(79),
lf          varchar2(1),
constraint pmsduna1 primary key( 
pmdudoct,
pmduunit)
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
create public synonym pmsdunaf for pmsdunaf;
create unique index pmsduna2 on pmsdunaf
(
pmduunit,
pmduhead,
pmdudoct
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 

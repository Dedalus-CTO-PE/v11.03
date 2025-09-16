create table emrsecaf
(
  emscoper    varchar2(4) default ' ' not null,
  emscscr1    number(1,0) default 0 not null,
  emscscr2    number(1,0) default 0 not null,
  emscscr3    number(1,0) default 0 not null,
  emscscr4    number(1,0) default 0 not null,
  emscscr5    number(1,0) default 0 not null,
  emscspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrseca1 primary key( 
emscoper)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

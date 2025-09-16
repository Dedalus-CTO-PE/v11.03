create table sinlodaf
(
  silddate    varchar2(6) default ' ' not null,
  sildirp     number(10,0) default 0 not null,
  sildilp     number(10,0) default 0 not null,
  sildbolp    number(10,0) default 0 not null,
  sildslo     number(10,0) default 0 not null,
  sildnslo    number(10,0) default 0 not null,
  sildslr     number(10,0) default 0 not null,
  sildnslr    number(10,0) default 0 not null,
  sildiri     number(10,0) default 0 not null,
  sildslrt    number(10,0) default 0 not null,
  sildinv     number(10,0) default 0 not null,
  sildrql     number(10,0) default 0 not null,
  sildzis     number(10,0) default 0 not null,
  sildgen     varchar2(10) default ' ' not null,
  sildtpo     number(10,0) default 0 not null,
  sildspa     varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinloda1 primary key( 
silddate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

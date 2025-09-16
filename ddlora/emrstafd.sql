create table emrstaaf
(
  emstcata    varchar2(2) default ' ' not null,
  emstcode    varchar2(3) default ' ' not null,
  emstdate    varchar2(8) default ' ' not null,
  emstnumb    number(6,0) default 0 not null,
  emstspar    varchar2(32) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrstaa1 primary key( 
emstcata,
emstcode,
emstdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

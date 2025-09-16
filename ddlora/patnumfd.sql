create table patnumwr
(
  pward       varchar2(3) default ' ' not null,
  pdate       varchar2(6) default ' ' not null,
  padmn       number(6,0) default 0 not null,
  ptrin       number(6,0) default 0 not null,
  ptrout      number(6,0) default 0 not null,
  pdsch       number(6,0) default 0 not null,
  pleav       number(6,0) default 0 not null,
  pretn       number(6,0) default 0 not null,
  lf          varchar2(1) default ' ' not null,
constraint patnumw1 primary key( 
pward,
pdate)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

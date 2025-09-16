create table patlg1af
(
  ptlgpost    varchar2(8) default ' ' not null,
  ptlglgac    varchar2(4) default ' ' not null,
  ptlgspre    varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patlg1a1 primary key( 
ptlgpost,
ptlglgac)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

create table emrwfmaf
(
  emwffld     varchar2(5) default ' ' not null,
  emwfide     varchar2(35) default ' ' not null,
  emwfdes     varchar2(35) default ' ' not null,
  emwfsde     varchar2(35) default ' ' not null,
  emwfman     varchar2(1) default ' ' not null,
  emwfidp     varchar2(1) default ' ' not null,
  emwfexf     varchar2(3) default ' ' not null,
  emwfres     varchar2(3) default ' ' not null,
  emwfmnd     varchar2(1) default ' ' not null,
  emwfspa     varchar2(23) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emrwfma1 primary key( 
emwffld)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index emrwfma2 on emrwfmaf
(
emwfman,
emwffld
)
  tablespace pas_indx; 
create unique index emrwfma3 on emrwfmaf
(
emwfexf,
emwffld
)
  tablespace pas_indx; 
create unique index emrwfma4 on emrwfmaf
(
emwfres,
emwffld
)
  tablespace pas_indx; 

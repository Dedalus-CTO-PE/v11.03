create table aaedg1af
(
  aed1init    varchar2(2) default ' ' not null,
  aed1desc    varchar2(20) default ' ' not null,
  aed1box1    varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaedg1a1 primary key( 
aed1init)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

create table aaedg2af
(
  aed2box1    varchar2(1) default ' ' not null,
  aed2dise    varchar2(2) default ' ' not null,
  aed2desc    varchar2(35) default ' ' not null,
  aed2box2    varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaedg2a1 primary key( 
aed2box1,
aed2dise)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

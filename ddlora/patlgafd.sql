create table patlgaaf
(
  lgacode     varchar2(4) default ' ' not null,
  lgadesc     varchar2(20) default ' ' not null,
  lgaspar     varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patlgaa1 primary key( 
lgacode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

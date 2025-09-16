create table ccspkyaf
(
  ccpkfky     varchar2(20) default ' ' not null,
  ccpkhcd     varchar2(2) default ' ' not null,
  ccpkdpt     varchar2(8) default ' ' not null,
  ccpkpcd     varchar2(8) default ' ' not null,
  ccpkspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccspkya1 primary key( 
ccpkfky,
ccpkhcd,
ccpkdpt,
ccpkpcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ccspkya2 on ccspkyaf
(
ccpkhcd,
ccpkdpt,
ccpkpcd,
ccpkfky
)
  tablespace pas_indx; 

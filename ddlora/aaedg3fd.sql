create table aaedg3af
(
  aed3box2    varchar2(1) default ' ' not null,
  aed3loct    varchar2(2) default ' ' not null,
  aed3desc    varchar2(35) default ' ' not null,
  aed3box3    varchar2(1) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaedg3a1 primary key( 
aed3box2,
aed3loct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

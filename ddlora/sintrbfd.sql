create table sintrbaf
(
  sitbnum     varchar2(8) default ' ' not null,
  sitbuni     varchar2(3) default ' ' not null,
  sitbtyp     varchar2(1) default ' ' not null,
  sitbper     varchar2(6) default ' ' not null,
  sitbcat     varchar2(7) default ' ' not null,
  sitbwar     varchar2(5) default ' ' not null,
  sitbqty     number(14,2) default 0 not null,
  sitbcst     number(14,2) default 0 not null,
  sitbbch     varchar2(5) default ' ' not null,
  sitbled     varchar2(2) default ' ' not null,
  sitbacc     varchar2(12) default ' ' not null,
  sitbspa     varchar2(28) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sintrba1 primary key( 
sitbnum,
sitbuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sintrba2 on sintrbaf
(
sitbled,
sitbacc,
sitbbch,
sitbnum,
sitbuni
)
  tablespace pas_indx; 

create table patca1af
(
  ptcaadmn    varchar2(8) default ' ' not null,
  ptcaadd1    varchar2(35) default ' ' not null,
  ptcaadd2    varchar2(35) default ' ' not null,
  ptcasub     varchar2(35) default ' ' not null,
  ptcaadd4    varchar2(35) default ' ' not null,
  ptcapcod    varchar2(8) default ' ' not null,
  ptcalga     varchar2(4) default ' ' not null,
  ptcahph     varchar2(20) default ' ' not null,
  ptcabph     varchar2(20) default ' ' not null,
  ptcaspar    varchar2(94) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patca1a1 primary key( 
ptcaadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

create table mrtcadaf
(
  mrcdadmn    varchar2(8) default ' ' not null,
  mrcdadat    varchar2(8) default ' ' not null,
  mrcdatim    varchar2(8) default ' ' not null,
  mrcdcntr    varchar2(3) default ' ' not null,
  mrcdrtyp    varchar2(2) default ' ' not null,
  mrcdprfx    varchar2(1) default ' ' not null,
  mrcddcod    varchar2(9) default ' ' not null,
  mrcdddes    varchar2(200) default ' ' not null,
  mrcdoflg    varchar2(1) default ' ' not null,
  mrcdpcod    varchar2(9) default ' ' not null,
  mrcdpdes    varchar2(200) default ' ' not null,
  mrcdodat    varchar2(8) default ' ' not null,
  mrcdostm    varchar2(8) default ' ' not null,
  mrcdoetm    varchar2(8) default ' ' not null,
  mrcdsurg    varchar2(10) default ' ' not null,
  mrcddrgd    varchar2(1) default ' ' not null,
  mrcdspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtcada1 primary key( 
mrcdadmn,
mrcdadat,
mrcdatim,
mrcdcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

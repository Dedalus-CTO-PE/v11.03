create table hicerraf
(
  hcerbtch    varchar2(5) default ' ' not null,
  hcerlcnt    varchar2(3) default ' ' not null,
  hcerpmci    varchar2(8) default ' ' not null,
  hcerpyee    varchar2(10) default ' ' not null,
  hcerpsrv    varchar2(10) default ' ' not null,
  hcerclmn    varchar2(8) default ' ' not null,
  hcervpos    varchar2(2) default ' ' not null,
  hcermedi    varchar2(10) default ' ' not null,
  hcerfnam    varchar2(12) default ' ' not null,
  hceritmn    varchar2(5) default ' ' not null,
  hceridat    varchar2(8) default ' ' not null,
  hcerbass    number(14,2) default 0 not null,
  hcerbpad    number(14,2) default 0 not null,
  hcerecod    varchar2(3) default ' ' not null,
  hcersurn    varchar2(18) default ' ' not null,
  hcerdesc    varchar2(50) default ' ' not null,
  hcerspar    varchar2(31) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicerra1 primary key( 
hcerbtch,
hcerlcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

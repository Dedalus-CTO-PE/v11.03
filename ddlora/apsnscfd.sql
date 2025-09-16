create table apsnscaf
(
  apnsbch     varchar2(5) default ' ' not null,
  apnsuni     varchar2(3) default ' ' not null,
  apnsna1     varchar2(30) default ' ' not null,
  apnsna2     varchar2(30) default ' ' not null,
  apnsad1     varchar2(25) default ' ' not null,
  apnsad2     varchar2(25) default ' ' not null,
  apnsad3     varchar2(25) default ' ' not null,
  apnspc      varchar2(6) default ' ' not null,
  apnsabn     varchar2(11) default ' ' not null,
  apnsgreg    number(1,0) default 0 not null,
  apnsspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsnsca1 primary key( 
apnsbch,
apnsuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsnsca2 on apsnscaf
(
apnsbch,
apnsna1,
apnsuni
)
  tablespace pas_indx; 

create table pmscmbaf
(
  pmcbvisn    varchar2(8) default ' ' not null,
  pmcbcntr    varchar2(6) default ' ' not null,
  pmcbunid    varchar2(10) default ' ' not null,
  pmcbrtyp    varchar2(1) default ' ' not null,
  pmcbstat    varchar2(1) default ' ' not null,
  pmcbitem    varchar2(9) default ' ' not null,
  pmcbquan    varchar2(5) default ' ' not null,
  pmcbrefn    varchar2(12) default ' ' not null,
  pmcbrdte    varchar2(8) default ' ' not null,
  pmcbtact    varchar2(1) default ' ' not null,
  pmcbtuid    varchar2(10) default ' ' not null,
  pmcbtdte    varchar2(8) default ' ' not null,
  pmcbttim    varchar2(8) default ' ' not null,
  pmcbcact    varchar2(1) default ' ' not null,
  pmcbcuid    varchar2(10) default ' ' not null,
  pmcbcdte    varchar2(8) default ' ' not null,
  pmcbctim    varchar2(8) default ' ' not null,
  pmcbbact    varchar2(1) default ' ' not null,
  pmcbbuid    varchar2(10) default ' ' not null,
  pmcbbdte    varchar2(8) default ' ' not null,
  pmcbbtim    varchar2(8) default ' ' not null,
  pmcbrsta    varchar2(1) default ' ' not null,
  pmcbduid    varchar2(10) default ' ' not null,
  pmcbddte    varchar2(8) default ' ' not null,
  pmcbdtim    varchar2(8) default ' ' not null,
  pmcbdcom    varchar2(50) default ' ' not null,
  pmcbspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmscmba1 primary key( 
pmcbvisn,
pmcbcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmscmba2 on pmscmbaf
(
pmcbrdte,
pmcbvisn,
pmcbcntr
)
  tablespace pas_indx; 

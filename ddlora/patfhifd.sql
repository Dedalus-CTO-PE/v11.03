create table patfhiaf
(
  ptfhhosp    varchar2(3) default ' ' not null,
  ptfhhfnd    varchar2(6) default ' ' not null,
  ptfhsyst    varchar2(2) default ' ' not null,
  ptfhhdat    varchar2(8) default ' ' not null,
  ptfhhrea    varchar2(3) default ' ' not null,
  ptfhdesc    varchar2(80) default ' ' not null,
  ptfhcuid    varchar2(10) default ' ' not null,
  ptfhcdat    varchar2(8) default ' ' not null,
  ptfhctim    varchar2(8) default ' ' not null,
  ptfhuuid    varchar2(10) default ' ' not null,
  ptfhudat    varchar2(8) default ' ' not null,
  ptfhutim    varchar2(8) default ' ' not null,
  ptfhspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patfhia1 primary key( 
ptfhhosp,
ptfhhfnd,
ptfhsyst)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patfhia2 on patfhiaf
(
ptfhsyst,
ptfhhosp,
ptfhhfnd
)
  tablespace pas_indx; 
create unique index patfhia3 on patfhiaf
(
ptfhhfnd,
ptfhhosp,
ptfhsyst
)
  tablespace pas_indx; 

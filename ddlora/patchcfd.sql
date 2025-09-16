create table patchcof
(
  chcatg      varchar2(2) default ' ' not null,
  chcode      varchar2(3) default ' ' not null,
  dchadmn     varchar2(8) default ' ' not null,
  chdate      varchar2(8) default ' ' not null,
  chtime      varchar2(8) default ' ' not null,
  chcrdate    varchar2(8) default ' ' not null,
  chcrtime    varchar2(8) default ' ' not null,
  chcrusid    varchar2(4) default ' ' not null,
  chupdate    varchar2(8) default ' ' not null,
  chuptime    varchar2(8) default ' ' not null,
  chupusid    varchar2(4) default ' ' not null,
  chepisno    varchar2(2) default ' ' not null,
  chcodcmp    varchar2(8) default ' ' not null,
  chspare     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patchco1 primary key( 
dchadmn,
chdate,
chtime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patchco2 on patchcof
(
dchadmn,
chepisno,
chdate,
chtime
)
  tablespace pas_indx; 
create unique index patchco3 on patchcof
(
chcrdate,
chcrtime,
dchadmn,
chdate,
chtime
)
  tablespace pas_indx; 

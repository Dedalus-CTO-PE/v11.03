create table pmserhaf
(
  pmehhosp    varchar2(3) default ' ' not null,
  pmehftid    varchar2(24) default ' ' not null,
  pmehradv    varchar2(30) default ' ' not null,
  pmehpnum    varchar2(4) default ' ' not null,
  pmehptot    varchar2(4) default ' ' not null,
  pmehdate    varchar2(8) default ' ' not null,
  pmehname    varchar2(40) default ' ' not null,
  pmehplid    varchar2(8) default ' ' not null,
  pmehbnum    varchar2(9) default ' ' not null,
  pmehbnam    varchar2(30) default ' ' not null,
  pmehbbsb    varchar2(6) default ' ' not null,
  pmehpref    varchar2(30) default ' ' not null,
  pmehdamt    varchar2(9) default ' ' not null,
  pmehstat    varchar2(1) default ' ' not null,
  pmehspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmserha1 primary key( 
pmehhosp,
pmehftid,
pmehradv,
pmehpnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmserha2 on pmserhaf
(
pmehhosp,
pmehdate,
pmehftid,
pmehradv,
pmehpnum
)
  tablespace pas_indx; 
create unique index pmserha3 on pmserhaf
(
pmehhosp,
pmehstat,
pmehdate,
pmehftid,
pmehradv,
pmehpnum
)
  tablespace pas_indx; 

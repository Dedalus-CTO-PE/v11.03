create table pmsideaf
(
  pmidadmn    varchar2(8) default ' ' not null,
  pmidclty    varchar2(3) default ' ' not null,
  pmidinvn    varchar2(8) default ' ' not null,
  pmidtrno    varchar2(6) default ' ' not null,
  pmidrtyp    varchar2(1) default ' ' not null,
  pmidfdat    varchar2(8) default ' ' not null,
  pmidtdat    varchar2(8) default ' ' not null,
  pmidnday    number(4,0) default 0 not null,
  pmiddesc    varchar2(35) default ' ' not null,
  pmiditem    varchar2(9) default ' ' not null,
  dpmiddef    varchar2(1) default ' ' not null,
  pmidregm    varchar2(10) default ' ' not null,
  pmidamnt    number(14,2) default 0 not null,
  pmidgstm    number(14,2) default 0 not null,
  pmidsplt    varchar2(1) default ' ' not null,
  pmidcnid    varchar2(6) default ' ' not null,
  pmidcuid    varchar2(10) default ' ' not null,
  pmidcdat    varchar2(8) default ' ' not null,
  pmidctim    varchar2(8) default ' ' not null,
  pmiduuid    varchar2(10) default ' ' not null,
  pmidudat    varchar2(8) default ' ' not null,
  pmidutim    varchar2(8) default ' ' not null,
  pmiditdt    varchar2(8) default ' ' not null,
  pmidspar    varchar2(92) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsidea1 primary key( 
pmidadmn,
pmidclty,
pmidinvn,
pmidtrno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsidea2 on pmsideaf
(
pmidadmn,
pmidinvn,
dpmiddef,
pmidclty,
pmidtrno
)
  tablespace pas_indx; 
create unique index pmsidea3 on pmsideaf
(
pmidadmn,
pmidinvn,
pmidrtyp,
pmidfdat,
pmidclty,
pmidtrno
)
  tablespace pas_indx; 
create unique index pmsidea4 on pmsideaf
(
pmidadmn,
pmidclty,
pmidinvn,
pmiditem,
pmidtrno
)
  tablespace pas_indx; 
create unique index pmsidea5 on pmsideaf
(
pmidinvn,
pmidadmn,
pmidclty,
pmidtrno
)
  tablespace pas_indx; 

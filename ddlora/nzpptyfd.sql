create table nzpptyaf
(
  nzptptyp    varchar2(3) default ' ' not null,
  nzptdesc    varchar2(30) default ' ' not null,
  nzptpind    varchar2(1) default ' ' not null,
  nzptcost    varchar2(3) default ' ' not null,
  nzptacod    varchar2(5) default ' ' not null,
  nzptscod    varchar2(3) default ' ' not null,
  nzptgstc    varchar2(3) default ' ' not null,
  nzptgsta    varchar2(5) default ' ' not null,
  nzptgsts    varchar2(3) default ' ' not null,
  nzptactv    varchar2(1) default ' ' not null,
  nzptcdat    varchar2(8) default ' ' not null,
  nzptctim    varchar2(8) default ' ' not null,
  nzptcuid    varchar2(10) default ' ' not null,
  nzptudat    varchar2(8) default ' ' not null,
  nzptutim    varchar2(8) default ' ' not null,
  nzptuuid    varchar2(10) default ' ' not null,
  nzptspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzpptya1 primary key( 
nzptptyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nzpptya2 on nzpptyaf
(
nzptdesc,
nzptptyp
)
  tablespace pas_indx; 

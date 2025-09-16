create table ibatmhaf
(
  ibthscod    varchar2(6) default ' ' not null,
  ibthdesc    varchar2(30) default ' ' not null,
  ibthwidt    number(3,0) default 0 not null,
  ibthleng    number(3,0) default 0 not null,
  ibthstyp    varchar2(3) default ' ' not null,
  ibthactv    varchar2(1) default ' ' not null,
  ibthcomm    varchar2(80) default ' ' not null,
  ibthcuid    varchar2(10) default ' ' not null,
  ibthcdat    varchar2(8) default ' ' not null,
  ibthctim    varchar2(8) default ' ' not null,
  ibthuuid    varchar2(10) default ' ' not null,
  ibthudat    varchar2(8) default ' ' not null,
  ibthutim    varchar2(8) default ' ' not null,
  ibthspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibatmha1 primary key( 
ibthscod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibatmha2 on ibatmhaf
(
ibthstyp,
ibthscod
)
  tablespace pas_indx; 
create unique index ibatmha3 on ibatmhaf
(
ibthdesc,
ibthscod
)
  tablespace pas_indx; 

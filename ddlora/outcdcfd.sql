create table outcdcaf
(
  otcdsite    varchar2(6) default ' ' not null,
  otcdctyp    varchar2(6) default ' ' not null,
  otcddiag    varchar2(9) default ' ' not null,
  otcddesc    varchar2(70) default ' ' not null,
  otcdicd     varchar2(9) default ' ' not null,
  otcdactv    varchar2(1) default ' ' not null,
  otcdcdat    varchar2(8) default ' ' not null,
  otcdctim    varchar2(8) default ' ' not null,
  otcdcuid    varchar2(10) default ' ' not null,
  otcdudat    varchar2(8) default ' ' not null,
  otcdutim    varchar2(8) default ' ' not null,
  otcduuid    varchar2(10) default ' ' not null,
  otcdspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outcdca1 primary key( 
otcdsite,
otcdctyp,
otcddiag)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outcdca2 on outcdcaf
(
otcdsite,
otcdctyp,
otcddesc,
otcddiag
)
  tablespace pas_indx; 

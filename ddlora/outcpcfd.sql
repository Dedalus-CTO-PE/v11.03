create table outcpcaf
(
  otcpsite    varchar2(6) default ' ' not null,
  otcpctyp    varchar2(6) default ' ' not null,
  otcpproc    varchar2(9) default ' ' not null,
  otcpdesc    varchar2(70) default ' ' not null,
  otcpicdc    varchar2(9) default ' ' not null,
  otcpactv    varchar2(1) default ' ' not null,
  otcpcdat    varchar2(8) default ' ' not null,
  otcpctim    varchar2(8) default ' ' not null,
  otcpcuid    varchar2(10) default ' ' not null,
  otcpudat    varchar2(8) default ' ' not null,
  otcputim    varchar2(8) default ' ' not null,
  otcpuuid    varchar2(10) default ' ' not null,
  otcpspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outcpca1 primary key( 
otcpsite,
otcpctyp,
otcpproc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outcpca2 on outcpcaf
(
otcpsite,
otcpctyp,
otcpdesc,
otcpproc
)
  tablespace pas_indx; 

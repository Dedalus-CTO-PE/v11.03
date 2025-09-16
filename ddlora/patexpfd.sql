create table patexcpf
(
  dptexvis    varchar2(8) default ' ' not null,
  ptexidat    varchar2(8) default ' ' not null,
  ptexiopr    varchar2(4) default ' ' not null,
  ptexiprt    number(2,0) default 0 not null,
  ptexstat    number(1,0) default 0 not null,
  ptexddat    varchar2(8) default ' ' not null,
  ptexdopr    varchar2(4) default ' ' not null,
  ptexdprt    number(2,0) default 0 not null,
  ptexspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patexpa1 primary key( 
dptexvis)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

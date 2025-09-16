create table hichisaf
(
  hchsbtch    varchar2(5) default ' ' not null,
  hchspmci    varchar2(8) default ' ' not null,
  hchspyee    varchar2(10) default ' ' not null,
  hchspsrv    varchar2(10) default ' ' not null,
  hchstdat    varchar2(8) default ' ' not null,
  hchsttim    varchar2(8) default ' ' not null,
  hchstuid    varchar2(10) default ' ' not null,
  hchsstat    varchar2(2) default ' ' not null,
  hchsspar    varchar2(70) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hichisa1 primary key( 
hchsbtch,
hchspsrv,
hchspmci,
hchspyee,
hchstdat,
hchsttim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

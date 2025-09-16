create table ibabasaf
(
  ibbabasc    varchar2(3) default ' ' not null,
  ibbadesc    varchar2(30) default ' ' not null,
  ibbaactv    number(1,0) default 0 not null,
  ibbatype    varchar2(1) default ' ' not null,
  ibbaspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibabasa1 primary key( 
ibbabasc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibabasa2 on ibabasaf
(
ibbadesc,
ibbabasc
)
  tablespace pas_indx; 

create table outthiaf
(
  otthoutn    varchar2(8) default ' ' not null,
  otthstat    varchar2(3) default ' ' not null,
  otthrsit    varchar2(255) default ' ' not null,
  otthrcod    varchar2(10) default ' ' not null,
  otthradd    varchar2(512) default ' ' not null,
  otthwurl    varchar2(255) default ' ' not null,
  otthe164    varchar2(20) default ' ' not null,
  otthspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outthia1 primary key( 
otthoutn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

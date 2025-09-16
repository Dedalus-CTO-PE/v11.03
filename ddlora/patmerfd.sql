create table patmerch
(
  mercode     varchar2(3) default ' ' not null,
  msummno     varchar2(12) default ' ' not null,
  msumdate    varchar2(8) default ' ' not null,
  mamtclm     number(14,2) default 0 not null,
  mamtpaid    number(14,2) default 0 not null,
  mcommiss    number(14,2) default 0 not null,
  mjournal    number(14,2) default 0 not null,
  lf          varchar2(1) default ' ' not null,
constraint patmerc1 primary key( 
mercode,
msummno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

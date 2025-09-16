create table accaudaf
(
  acauclmn    varchar2(20) default ' ' not null,
  acauadmn    varchar2(8) default ' ' not null,
  acaudate    varchar2(8) default ' ' not null,
  acautime    varchar2(8) default ' ' not null,
  acauwuid    varchar2(10) default ' ' not null,
  acauauty    varchar2(1) default ' ' not null,
  acautrec    varchar2(1) default ' ' not null,
  acaudigc    varchar2(10) default ' ' not null,
  acaudigv    varchar2(3) default ' ' not null,
  acaudigs    varchar2(1) default ' ' not null,
  acaurpty    varchar2(3) default ' ' not null,
  acausatc    varchar2(6) default ' ' not null,
  acauoacc    varchar2(20) default ' ' not null,
  acauspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint accauda1 primary key( 
acauclmn,
acauadmn,
acaudate,
acautime,
acauwuid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

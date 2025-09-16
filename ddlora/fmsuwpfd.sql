create table fmsuwpaf
(
  fmuwledg    varchar2(2) default ' ' not null,
  fmuwacct    varchar2(12) default ' ' not null,
  fmuwlno     varchar2(3) default ' ' not null,
  fmuwline    varchar2(70) default ' ' not null,
  fmuwspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsuwpa1 primary key( 
fmuwledg,
fmuwacct,
fmuwlno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 

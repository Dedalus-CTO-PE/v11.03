create table patpcpaf
(
  ptppcode    varchar2(3) default ' ' not null,
  ptppcpid    varchar2(3) default ' ' not null,
  ptppscid    varchar2(3) default ' ' not null,
  ptppcvid    varchar2(1) default ' ' not null,
  ptppcnam    varchar2(70) default ' ' not null,
  ptppcrol    varchar2(6) default ' ' not null,
  ptppspar    varchar2(23) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patpcpa1 primary key( 
ptppcode,
ptppcpid,
ptppscid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patpcpa2 on patpcpaf
(
ptppcpid,
ptppcode,
ptppscid
)
  tablespace pas_indx; 

create table webeehaf
(
  wbeharid    varchar2(20) default ' ' not null,
  wbehrptc    varchar2(3) default ' ' not null,
  wbehctid    varchar2(24) default ' ' not null,
  wbehbenl    varchar2(1) default ' ' not null,
  wbehcfac    varchar2(4) default ' ' not null,
  wbehcpam    varchar2(9) default ' ' not null,
  wbehcpdr    varchar2(4) default ' ' not null,
  wbehcpdi    varchar2(1) default ' ' not null,
  wbehcpfn    varchar2(40) default ' ' not null,
  wbehcpmn    varchar2(10) default ' ' not null,
  wbehcprn    varchar2(1) default ' ' not null,
  wbehexam    varchar2(9) default ' ' not null,
  wbeheadi    varchar2(1) default ' ' not null,
  wbehexba    varchar2(9) default ' ' not null,
  wbehexdi    varchar2(1) default ' ' not null,
  wbehfsta    varchar2(1) default ' ' not null,
  wbehfrid    varchar2(20) default ' ' not null,
  wbehfscd    varchar2(4) default ' ' not null,
  wbehmscd    varchar2(4) default ' ' not null,
  wbehpeai    varchar2(1) default ' ' not null,
  wbehpscd    varchar2(30) default ' ' not null,
  wbehtnam    varchar2(80) default ' ' not null,
  wbehtbdi    varchar2(1) default ' ' not null,
  wbehtbsc    varchar2(15) default ' ' not null,
  wbehvcid    varchar2(2) default ' ' not null,
  wbehcdte    varchar2(8) default ' ' not null,
  wbehctim    varchar2(8) default ' ' not null,
  wbehcuid    varchar2(10) default ' ' not null,
  wbehudte    varchar2(8) default ' ' not null,
  wbehutim    varchar2(8) default ' ' not null,
  wbehuuid    varchar2(10) default ' ' not null,
  wbehmsid    varchar2(36) default ' ' not null,
  wbehspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webeeha1 primary key( 
wbeharid,
wbehrptc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webeeha2 on webeehaf
(
wbehctid,
wbeharid,
wbehrptc
)
  tablespace pas_indx; 
create unique index webeeha3 on webeehaf
(
wbehmsid,
wbeharid,
wbehrptc
)
  tablespace pas_indx; 

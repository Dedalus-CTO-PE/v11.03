create table webeehaf
(
  wbeharid    char(20) default ' ' not null,
  wbehrptc    char(3) default ' ' not null,
  wbehctid    char(24) default ' ' not null,
  wbehbenl    char(1) default ' ' not null,
  wbehcfac    char(4) default ' ' not null,
  wbehcpam    char(9) default ' ' not null,
  wbehcpdr    char(4) default ' ' not null,
  wbehcpdi    char(1) default ' ' not null,
  wbehcpfn    char(40) default ' ' not null,
  wbehcpmn    char(10) default ' ' not null,
  wbehcprn    char(1) default ' ' not null,
  wbehexam    char(9) default ' ' not null,
  wbeheadi    char(1) default ' ' not null,
  wbehexba    char(9) default ' ' not null,
  wbehexdi    char(1) default ' ' not null,
  wbehfsta    char(1) default ' ' not null,
  wbehfrid    char(20) default ' ' not null,
  wbehfscd    char(4) default ' ' not null,
  wbehmscd    char(4) default ' ' not null,
  wbehpeai    char(1) default ' ' not null,
  wbehpscd    char(30) default ' ' not null,
  wbehtnam    char(80) default ' ' not null,
  wbehtbdi    char(1) default ' ' not null,
  wbehtbsc    char(15) default ' ' not null,
  wbehvcid    char(2) default ' ' not null,
  wbehcdte    char(8) default ' ' not null,
  wbehctim    char(8) default ' ' not null,
  wbehcuid    char(10) default ' ' not null,
  wbehudte    char(8) default ' ' not null,
  wbehutim    char(8) default ' ' not null,
  wbehuuid    char(10) default ' ' not null,
  wbehmsid    char(36) default ' ' not null,
  wbehspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index webeeha1 on webeehaf
(
wbeharid,
wbehrptc
);
create unique index webeeha2 on webeehaf
(
wbehctid,
wbeharid,
wbehrptc
);
create unique index webeeha3 on webeehaf
(
wbehmsid,
wbeharid,
wbehrptc
);
revoke all on webeehaf from public ; 
grant select on webeehaf to public ; 

create table obsftxaf
(
  obftvisn    char(8) default ' ' not null,
  obfttype    char(3) default ' ' not null,
  obftline    char(3) default ' ' not null,
  obftdata    char(100) default ' ' not null,
  obftukey    char(24) default ' ' not null,
  obftspar    char(80) default ' ' not null,
  lf          char(1)
);
create unique index obsftxa1 on obsftxaf
(
obftvisn,
obfttype,
obftline
);
revoke all on obsftxaf from public ; 
grant select on obsftxaf to public ; 

create table ceatfmaf
(
  cetfcli     char(6) default ' ' not null,
  cetfspc     char(3) default ' ' not null,
  cetfpsc     char(7) default ' ' not null,
  cetfstm     decimal(2,0) default 0 not null,
  cetfetm     decimal(2,0) default 0 not null,
  cetfspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceatfma1 on ceatfmaf
(
cetfcli,
cetfspc,
cetfpsc
);
revoke all on ceatfmaf from public ; 
grant select on ceatfmaf to public ; 

create table bokcanaf
(
bctype      char(3),
bccanc      char(3),
bcdate      char(6),
bccancl     decimal(6,0),
bcspare     char(31),
lf          char(1)
);
create unique index bokcana1 on bokcanaf
(
bctype,
bccanc,
bcdate
);
revoke all on bokcanaf from public ; 
grant select on bokcanaf to public ; 

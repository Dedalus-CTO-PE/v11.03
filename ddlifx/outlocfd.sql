create table outlocaf
(
loasite     char(6),
loagrup     char(3),
loatype     char(6),
loacach     char(3),
loadate     char(6),
loanumb     decimal(8,0),
loaspar     char(17),
lf          char(1)
);
create unique index outloca1 on outlocaf
(
loasite,
loagrup,
loatype,
loacach,
loadate
);
revoke all on outlocaf from public ; 
grant select on outlocaf to public ; 

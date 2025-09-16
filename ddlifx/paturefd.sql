create table patureaf
(
pturinvn    char(8),
pturvisn    char(8),
pturstat    char(1),
ptursyst    char(1),
pturclmn    char(3),
pturhfnd    char(6),
pturhtab    char(8),
pturinvt    decimal(14,2),
pturpaym    decimal(14,2),
pturjrnl    decimal(14,2),
pturostd    decimal(14,2),
pturcdat    char(8),
pturctim    char(8),
pturcuid    char(10),
pturudat    char(8),
pturutim    char(8),
pturuuid    char(10),
pturspar    char(100),
lf          char(1)
);
create unique index paturea1 on patureaf
(
pturinvn
);
create unique index paturea2 on patureaf
(
pturudat,
pturutim,
pturinvn
);
revoke all on patureaf from public ; 
grant select on patureaf to public ; 

create table patedtaf
(
dptetflg    char(2),
ptetpayc    char(6),
ptetadmn    char(8),
ptetinvn    char(8),
ptetbatn    char(8),
pteturno    char(8),
ptetpbat    char(8),
ptetnbat    char(8),
ptetindt    char(8),
ptetinty    char(1),
ptetexcl    char(1),
ptetccst    char(2),
ptetrcal    char(1),
ptetinam    char(15),
ptetisys    char(1),
ptetspar    char(14),
lf          char(1)
);
create unique index patedta1 on patedtaf
(
dptetflg,
ptetadmn,
ptetinvn,
ptetbatn
);
create unique index patedta2 on patedtaf
(
ptetinvn,
ptetbatn
);
create unique index patedta3 on patedtaf
(
ptetbatn,
ptetadmn,
ptetinvn
);
create unique index patedta4 on patedtaf
(
ptetadmn,
ptetinvn,
ptetbatn
);
create unique index patedta5 on patedtaf
(
pteturno,
ptetadmn,
ptetinvn,
ptetbatn
);
revoke all on patedtaf from public ; 
grant select on patedtaf to public ; 

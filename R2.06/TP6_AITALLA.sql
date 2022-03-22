CREATE VIEW vueEns AS SELECT ens.* FROM enseignant ens;

CREATE VIEW vueNomPrenEtud AS SELECT et.nom, et.prenom FROM etudiant et;

CREATE VIEW vueEtudS2 AS SELECT et.* FROM etudiant et WHERE classe = 'S2';

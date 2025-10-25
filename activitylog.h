#ifndef ACTIVITYLOG_H
#define ACTIVITYLOG_H

#include <string>

// Fonction principale de journalisation
void logActivity(const std::string& line);

// Evénements spécifiques
void logAddBook(const std::string& title, const std::string& author, const std::string& isbn);
void logDeleteBook(const std::string& isbn);
void logBorrow(const std::string& isbn, const std::string& userId, const std::string& userName);
void logReturn(const std::string& isbn);
void logAddUser(const std::string& userId, const std::string& userName);

#endif
